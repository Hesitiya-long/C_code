# -*- coding: gbk -*-

import jieba
import jieba.posseg as pseg
from wordcloud import WordCloud
import matplotlib.pyplot as plt
import pandas as pd


# ��ȡ�ı��ļ�
def read_text_file(file_path):
    with open(file_path, 'r', encoding='utf-8') as f:
        text = f.read()
    return text


# �ִʴ���
def word_segmentation(text):
    words = jieba.lcut(text)
    return words


# ���Ա�ע
def pos_tagging(words):
    tagged_words = pseg.lcut("".join(words))
    result = [(word.word, word.flag) for word in tagged_words]
    return result


# ���Էֲ�����
def pos_distribution(tagged_words):
    pos_df = pd.DataFrame(tagged_words, columns=['word', 'pos'])
    pos_count = pos_df['pos'].value_counts()
    return pos_count


# ��Ƶ�ʷ���
def high_frequency_words(words, topn=10):
    word_counts = pd.Series(words).value_counts()
    return word_counts[:topn]


# �ؼ��ʷ��������Դ�ƵΪ���ݣ�ʵ�ʿɽ��TF - IDF���㷨��
def keyword_analysis(words, topn=10):
    word_counts = pd.Series(words).value_counts()
    return word_counts[:topn]


# ���ɴ���
def generate_wordcloud(text):
    wordcloud = WordCloud(font_path='simhei.ttf', background_color='white').generate(text)
    plt.imshow(wordcloud, interpolation='bilinear')
    plt.axis("off")
    plt.savefig("ciyun.jpg")
    plt.close()


if __name__ == "__main__":
    # ��ȷָ���ı��ļ���ַ
    file_path = "D:\\c����\�ļ�\\PythonApplication1\\PythonApplication1\\��������.txt"
    text = read_text_file(file_path)
    words = word_segmentation(text)
    # ����ִʽ��
    with open('�ִʽ��.txt', 'w', encoding='utf-8') as f:
        f.write(" ".join(words))
    pos_result = pos_tagging(words)
    pos_distribution_result = pos_distribution(pos_result)
    freq_words = high_frequency_words(words)
    keyword_result = keyword_analysis(words)
    generate_wordcloud(text)

    # ���������Ϊ�����ʽ��������Էֲ�����Ƶ�ʡ��ؼ��ʷ����ı��չʾҪ��
    pos_distribution_result.to_csv('���Էֲ����.csv', encoding='utf-8')
    freq_words.to_csv('��Ƶ�ʽ��.csv', encoding='utf-8')
    keyword_result.to_csv('�ؼ��ʽ��.csv', encoding='utf-8')