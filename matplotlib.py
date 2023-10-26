import pandas as pd
# 从指定的url中读取excel文件
df=pd.read_excel(r'https://oss.xinchanjiao.com/upload/default/20220914-1bbc5a0e-9409-4ffa-adab-06f15090e2fb.xlsx')
# 打印前5行数据
print(df.head())
# 打印数据描述
print(df.describe())
#按照销售毛利降序、销售收入升序进行排序。
#ascending=False代表降序排列
#inplace=True代表直接对df进行修改
df.sort_values(['销售毛利','销售收入'],#排序列
               ascending=[False,True],#排序方式
               inplace=True)#直接修改
print(df.head(10))#查看前10