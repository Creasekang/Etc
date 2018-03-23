#!/usr/bin/env python3
# -*- coding: utf-8 -*-
import pandas as pd
from pandas import DataFrame
data=pd.read_csv("./dax.txt",sep=',')
data.to_excel("sample.xlsx",index=False)