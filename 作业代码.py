import jieba
import jieba.posseg as pseg
from wordcloud import WordCloud
import matplotlib.pyplot as plt
import pandas as pd


# 读取文本文件
def read_text_file(file_path):
    with open(file_path, 'r', encoding='utf-8') as f:
        text = f.read()
    return text


# 分词处理
def word_segmentation(text):
    words = jieba.lcut(text)
    return words


# 词性标注
def pos_tagging(words):
    tagged_words = pseg.lcut("".join(words))
    result = [(word.word, word.flag) for word in tagged_words]
    return result


# 词性分布分析
def pos_distribution(tagged_words):
    pos_df = pd.DataFrame(tagged_words, columns=['word', 'pos'])
    pos_count = pos_df['pos'].value_counts()
    return pos_count


# 高频词分析
def high_frequency_words(words, topn=10):
    word_counts = pd.Series(words).value_counts()
    return word_counts[:topn]


# 关键词分析（简单以词频为依据，实际可结合TF - IDF等算法）
def keyword_analysis(words, topn=10):
    word_counts = pd.Series(words).value_counts()
    return word_counts[:topn]


# 生成词云
def generate_wordcloud(text):
    wordcloud = WordCloud(font_path='simhei.ttf', background_color='white').generate(text)
    plt.imshow(wordcloud, interpolation='bilinear')
    plt.axis("off")
    plt.savefig("ciyun.jpg")
    plt.close()


if __name__ == "__main__":
    # 明确指定文本文件地址
    file_path = "D:\\pycharm\\PythonProject1\\.venv\\新闻文章.txt"
    text = read_text_file(file_path)
    words = word_segmentation(text)
    # 保存分词结果
    with open('分词结果.txt', 'w', encoding='utf-8') as f:
        f.write(" ".join(words))
    pos_result = pos_tagging(words)
    pos_distribution_result = pos_distribution(pos_result)
    freq_words = high_frequency_words(words)
    keyword_result = keyword_analysis(words)
    generate_wordcloud(text)

    # 将结果保存为表格形式（满足词性分布、高频词、关键词分析的表格展示要求）
    pos_distribution_result.to_csv('词性分布结果.csv', encoding='utf-8')
    freq_words.to_csv('高频词结果.csv', encoding='utf-8')
    keyword_result.to_csv('关键词结果.csv', encoding='utf-8')