//
//  CMSStockQuotesProtocol.h
//  CMSPaaS
//
//  Created by sway on 2021/1/7.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol CMSStockQuotesProtocol <NSObject>

@property (nonatomic, copy) NSString *code; // 股票x代码
@property (nonatomic, copy) NSString *setCode; // 市场代码
@property (nonatomic, copy) NSString *name; // 股票名称

@property (nonatomic, copy) NSString *uri; // 跳转uri
@property (nonatomic, copy) NSString *date; // 数据日期
@property (nonatomic, copy) NSArray<NSString *> *logoArray; //股票类型logo
@property (nonatomic, strong) NSNumber *current; // 现价
@property (nonatomic, strong) NSNumber *change; // 涨跌
@property (nonatomic, strong) NSNumber *changeRate; // 涨幅
@property (nonatomic, strong) NSNumber *changeSpeed; // 涨速
@property (nonatomic, strong) NSNumber *turnoverRate; // 换手率
@property (nonatomic, strong) NSNumber *high; // 最高
@property (nonatomic, strong) NSNumber *low; // 最低
@property (nonatomic, strong) NSNumber *open; // 今开
@property (nonatomic, strong) NSNumber *close; // 昨收
@property (nonatomic, strong) NSNumber *average; // 均价
@property (nonatomic, strong) NSNumber *volumeRatio; // 量比
@property (nonatomic, strong) NSNumber *amplitude; // 振幅
@property (nonatomic, strong) NSNumber *orderRatio; // 委比
@property (nonatomic, strong) NSNumber *totalVolume; // 总量
@property (nonatomic, strong) NSNumber *volume; // 现量
@property (nonatomic, strong) NSNumber *amount; // 总额
@property (nonatomic, strong) NSNumber *inside; // 内盘
@property (nonatomic, strong) NSNumber *outside; // 外盘
@property (nonatomic, strong) NSNumber *peDynamic; // 市盈（动）
@property (nonatomic, strong) NSNumber *peStatic; // 市盈（静）
@property (nonatomic, strong) NSNumber *peTTM; // 市盈（TTM）
@property (nonatomic, strong) NSNumber *pbr; // 市净率
@property (nonatomic, strong) NSNumber *eps; // 每股收益
@property (nonatomic, strong) NSNumber *naps; // 每股净资产
@property (nonatomic, strong) NSNumber *cmv; // 流通市值
@property (nonatomic, strong) NSNumber *gmv; // AB股总市值
@property (nonatomic, strong) NSNumber *circulatingShare; // 流通股
@property (nonatomic, strong) NSNumber *capitalization; // 总股本
@property (nonatomic, strong) NSNumber *continuousRiseDays; // 连涨天
@property (nonatomic, strong) NSNumber *gainsDays; // 日涨幅
@property (nonatomic, strong) NSNumber *netUnitValue; // 单位净值
@property (nonatomic, strong) NSNumber *gains3Days; // 3日涨幅
@property (nonatomic, strong) NSNumber *gains5Days; // 5日涨幅
@property (nonatomic, strong) NSNumber *gains20Days; // 20日涨幅
@property (nonatomic, strong) NSNumber *gains60Days; // 60日涨幅
@property (nonatomic, strong) NSNumber *gainsYear; // 今年以来涨幅
@property (nonatomic, copy) NSString *industry; // 行业
@property (nonatomic, copy) NSString *region; // 地区
@property (nonatomic, strong) NSNumber *netInflow; // 净流入
@property (nonatomic, strong) NSNumber *mainNetInflow; // 主力净流出
@property (nonatomic, strong) NSNumber *fundPremiumRate; // 基金溢价率
@property (nonatomic, strong) NSNumber *fundValue; // 基金最新净值
@property (nonatomic, strong) NSNumber *fundTotalValue; // 基金累计净值
@property (nonatomic, strong) NSNumber *revenueTenThousands; // 基金万份收益
@property (nonatomic, strong) NSNumber *revenueRateYear; // 年化收益率
@property (nonatomic, strong) NSNumber *futurePosition; // 期货持仓量
@property (nonatomic, strong) NSNumber *futurePrePosition; // 期货昨持仓量
@property (nonatomic, strong) NSNumber *futurePositionDiffer; // 期货持仓差
@property (nonatomic, strong) NSNumber *futureSettlePrice; // 期货结算价
@property (nonatomic, strong) NSNumber *futurePreSettlePrice; // 期货昨结算价
@property (nonatomic, strong) NSNumber *futurePremium; // 期货溢价
@property (nonatomic, strong) NSNumber *netValueAndTime; // 最近净值
@property (nonatomic, strong) NSNumber *capitalDays; // 逆回购占款天数
@property (nonatomic, strong) NSNumber *convertiblePremium; // 可转债的转股溢价率

- (void)copyDataFromQuotes:(id<CMSStockQuotesProtocol>)quotes;

@end

NS_ASSUME_NONNULL_END
