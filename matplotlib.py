# 导入pandas库
import pandas as pd
# 从指定的url中读取excel文件
df=pd.read_excel(r'https://oss.xinchanjiao.com/upload/default/20220914-1bbc5a0e-9409-4ffa-adab-06f15090e2fb.xlsx')
# 打印前5行数据
print(df.head())
print(df.describe())