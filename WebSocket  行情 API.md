

## 现货 WebSocket 行情 API<br>

| **接口类型** | **接口数据类型** | **请求方法**                 | **类型** | **描述**                | **需要验签** |
| ------------ | ---------------- | ---------------------------- | -------- | ----------------------- | ------------ |
| Websocket    | 市场行情接口     | market.$symbol.kline.$period | sub      | 订阅 KLine 数据         | 否           |
| Websocket    | 市场行情接口     | market.$symbol.kline.$period | req      | 请求 KLine 数据         | 否           |
| Websocket    | 市场行情接口     | market.$symbol.depth.$type   | sub      | 订阅 Market Depth 数据  | 否           |
| Websocket    | 市场行情接口     | market.$symbol.depth.$type   | req      | 请求 Market Depth 数据  | 否           |
| Websocket    | 市场行情接口     | market.$symbol.detail        | sub      | 订阅 Market detail 数据 | 否           |
| Websocket    | 市场行情接口     | market.$symbol.detail        | req      | 请求 Market detail 数据 | 否           |
| Websocket    | 市场行情接口     | market.$symbol.trade.detail  | req      | 请求 Trade detail 数据  | 否           |
| Websocket    | 市场行情接口     | market.$symbol.trade.detail  | sub      | 订阅 Trade Detail 数据  | 否           |



## 交割合约 WebSocket 行情 API<br>

| **接口类型** | **接口数据类型** | **请求方法**                 | **类型** | **描述**                | **需要验签** |
| ------------ | ---------------- | ---------------------------- | -------- | ----------------------- | ------------ |
| Websocket    | 市场行情接口     | market.$symbol.kline.$period | sub      | 订阅 KLine 数据         | 否           |
| Websocket    | 市场行情接口     | market.$symbol.kline.$period | req      | 请求 KLine 数据         | 否           |
| Websocket    | 市场行情接口     | market.$symbol.depth.$type   | sub      | 订阅 Market Depth 数据  | 否           |
| Websocket    | 市场行情接口     | market.$symbol.detail        | sub      | 订阅 Market detail 数据 | 否           |
| Websocket    | 市场行情接口     | market.$symbol.trade.detail  | req      | 请求 Trade detail 数据  | 否           |
| Websocket    | 市场行情接口     | market.$symbol.trade.detail  | sub      | 订阅 Trade Detail 数据  | 否           |

## 永续合约 WebSocket 行情 API 

认证签名： 鉴权-Authentication 用户自⼰在火币网⽣成Access Key和Secret Key，Secret Key由用户自⼰保存，⽤户需提供Access Key。目前关于 apikey 申请和修改，请在“账户 - API 管理 ” 创建新API Key 填写备注(可选择绑定 ip)点击创建。其中 Access Key 为 API 访问密钥，Secret Key 为用户对请求进⾏签名的密钥(仅申请时可见)。用户按规则生成签名(Signature)。

交易功能 websocket 版本接⼝建立连接时首先要做鉴权操作，具体格式如下，

重要提示：这两个密钥与账号安全紧密相关，无论何时都请勿向其它人透露。

鉴权请求数据格式 {

"op": "auth",

"type": "api",

"AccessKeyId": "e2xxxxxx-99xxxxxx-84xxxxxx-7xxxx",

"SignatureMethod": "HmacSHA256",

"SignatureVersion": "2",

"Timestamp": "2017-05-11T15:19:30",

"Signature": "4F65x5A2bLyMWVQj3Aqp+B4w+ivaA7n5Oi2SuYtCJ9o=",

}

鉴权请求数据格式说明

| **字段名称**     | **类型** | **说明**                                                     |
| ---------------- | -------- | ------------------------------------------------------------ |
| op               | string   | 必填；操作名称，鉴权固定值为auth                             |
| type             | string   | 必填；认证方式 api表示接口认证，ticket 表示终端认证          |
| cid              | string   | 选填；Client请求唯一ID                                       |
| AccessKeyId      | string   | type的值为api时必填；API 访问密钥, 您申请的 APIKEY 中的 AccessKey |
| SignatureMethod  | string   | type的值为api时必填；签名方法, 用户计算签名的基于哈希的协议，此处使用 HmacSHA256 |
| SignatureVersion | string   | type的值为api时必填；签名协议的版本，此处使用 2              |
| Timestamp        | string   | type的值为api时必填；时间戳, 您发出请求的时间 (UTC 时区) 。在查询请求中包含此值有助于防止第三方截取您的请求。如:2017-05-11T16:22:06。再次强调是 (UTC 时区) |
| Signature        | string   | type的值为api时必填；签名, 计算得出的值，用于确保签名有效和未被篡改 |

注意： 为了减少已有用户的接入工作量，此处使用了与REST接口同样的签名算法进行鉴权。

请注意大小写

当type为api时，参数op，type，cid，Signature不参加签名计算

此处签名计算中请求方法固定值为GET,其余值请参考REST接口签名算法文档

步骤： 示例例参数签名(Signature)计算过程如下，

规范要计算签名的请求 因为使用 HMAC 进⾏签名计算时，使⽤不同内容计算得到的结果会完全 不同。所以在进⾏签名计算前，请先对请求进⾏规范化处理。

请求方法(GET 或 POST)，后面添加换行符 \n 。

GET\n

添加小写的访问地址，后面添加换行符\n。 api.hbdm.com\n

访问方法的路径，后面添加换行符\n。 /notification\n

按照ASCII码的顺序对参数名进行排序(使⽤ UTF-8 编码，且进⾏了 URI 编码，十六进制字符必须 大写，如‘:’会被编码为'%3A'，空格被编码为'%20')。例如，下面是请求参数的原始顺序，进⾏过 编码后。 AccessKeyId=e2xxxxxx-99xxxxxx-84xxxxxx- 7xxxx&SignatureMethod=HmacSHA256&SignatureVersion=2&Timestamp=2017-05- 11T15%3A19%3A30

按照以上顺序，将各参数使用字符’&’连接。

组成最终的要进行签名计算的字符串如下:

计算签名，将以下两个参数传入加密哈希函数: 要进行签名计算的字符串，进行签名的密钥(SecretKey)

得到签名计算结果并进行 Base64编码

将上述值作为参数Signature的取值添加到 API 请求中。 将此参数添加到请求时，必须将该值进⾏URI编码。

| **接口类型** | **接口数据类型**   | **请求方法**                 | **类型** | **描述**                | **需要验签** |
| ------------ | ------------------ | ---------------------------- | -------- | ----------------------- | ------------ |
| Websocket    | 市场行情接口       | market.$symbol.kline.$period | sub      | 订阅 KLine 数据         | 否           |
| Websocket    | 市场行情接口       | market.$symbol.kline.$period | req      | 请求 KLine 数据         | 否           |
| Websocket    | 市场行情接口       | market.$symbol.depth.$type   | sub      | 订阅 Market Depth 数据  | 否           |
| Websocket    | 市场行情接口       | market.$symbol.detail        | sub      | 订阅 Market detail 数据 | 否           |
| Websocket    | 市场行情接口       | market.$symbol.trade.detail  | req      | 请求Trade detail 数据   | 否           |
| Websocket    | 市场行情接口       | market.$symbol.trade.detail  | sub      | 订阅 Trade Detail 数据  | 否           |
| Websocket    | 订单和用户数据接口 | orders.$symbol               | sub      | 订阅订单成交数据        | 是           |
| Websocket    | 订单和用户数据接口 | matchOrders.$symbol          | sub      | 订阅订单撮合数据        | 是           |
| Websocket    | 订单和用户数据接口 | accounts.$symbol             | sub      | 订阅资产变动数据        | 是           |
| Websocket    | 订单和用户数据接口 | positions.$symbol            | sub      | 订阅持仓变动更新数据    | 是           |
| Websocket    | 指数价格数据接口   | indexs.$symbol               | sub      | 订阅指数价格数据        | 否           |
| Websocket    | 订单和用户数据接口 | liquidationprice.$symbol     |          |                         |              |

