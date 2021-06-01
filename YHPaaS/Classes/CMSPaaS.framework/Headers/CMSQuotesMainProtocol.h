//
//  CMSQuotesMainProtocol.h
//  CMSPaaS
//
//  Created by HJ on 2020/12/30.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "CMSStockProtocol.h"
#import "CMSStockBlockModel.h"
#import "CMSSelfSelectStockListView.h"
#import "CMSQuotesMainInflowsBlockModel.h"
#import "CMSQuotesMarketPreViewPlateModel.h"
#import "CMSQuotesHotTopicsTodayHotModel.h"
#import "CMSRecentOpportunityModel.h"
#import "CMSQuoteMarketStatisticsDataModel.h"
#import "CMSQuotesCommentModel.h"
#import "CMSStockQuotesTimeChartModel.h"

NS_ASSUME_NONNULL_BEGIN

@class CMSHuShenGangTongCapitalFlowModel,CMSTimeLineItem,CMSMarketChangeInfo;

@protocol CMSQuotesMainProtocol <NSObject>

- (NSString *)codeAliasForCode:(NSString *)code;

/// 请求龙虎榜数据
/// @param type 龙虎榜类型
/// @param sort 排序
/// @param startIndex startIndex
/// @param count count
/// @param callback datas:数据源, date:日期, stockCount:新股个数
- (void)getDragonTigersWithType:(NSString *)type
                     sort:(CMSSelfSelectStockSortInfo * _Nullable)sort
               startIndex:(NSInteger)startIndex
                    count:(NSInteger)count
                 callback:(void (^_Nullable)(NSArray<id<CMSStockProtocol>> * _Nonnull datas, NSString * _Nonnull date, NSString *  _Nonnull stockCount))callback;


/// 请求板块数据
/// @param blockType 板块类型
/// @param sort 排序
/// @param startIndex startIndex
/// @param count count
/// @param callback datas:数据源
- (void)getBlocksWithType:(NSString *)blockType
                               sort:(CMSSelfSelectStockSortInfo * _Nullable)sort
                         startIndex:(NSInteger)startIndex
                              count:(NSInteger)count
                           callback:(void (^_Nullable)(NSArray<CMSStockBlockModel *> * _Nonnull datas, int64_t totalNumber))callback;

///AH股溢价榜接口
- (void)getAHStockListWithStartIndex:(NSInteger)startIndex
                               count:(NSInteger)count
                          properties:(NSArray<NSString *> *)properties
                            callback:(void(^_Nullable)(NSArray * _Nonnull data, int64_t totalNumber))callback;

///最近浏览接口
- (void)getRecentlyStockListWithStartIndex:(NSInteger)startIndex
                                     count:(NSInteger)count
                              sortProperty:(NSString * _Nullable)sortProperty
                                   ordered:(NSComparisonResult)ordered
                                properties:(NSArray<NSString *> *)properties
                                  callback:(void(^_Nullable)(NSArray * _Nonnull data, int64_t totalNumber))callback;


/** 请求 股票列表 数据
 *@param setDomain 细分市场的常量
 *@param startIndex 起始位置
 *@param count 请求数量
 *@param sortProperty 排序方式（0 不排名，1 按升序排名，2 按降序排名）
 *@param properties 属性集合 (现价，涨幅，跌幅...)
 *@param callback 返回值
 */
- (void)getMultiQuotesWithSetDomain:(NSInteger)setDomain
                             target:(NSInteger)target
                         startIndex:(NSInteger)startIndex
                              count:(NSInteger)count
                            subCode:(nullable NSString *)subCode
                       sortProperty:(nullable NSString *)sortProperty
                            ordered:(NSComparisonResult)ordered
                         properties:(nullable NSArray<NSString *> *)properties
                           callback:(void (^ _Nullable)(NSArray * _Nonnull, int64_t totalNumber))callback;

/** 请求 A股沪深 行情统计数据
 */
- (void)getMarketStatisticsData:(void(^_Nullable)(CMSQuoteMarketStatisticsDataModel * _Nonnull data))callback;

/** 请求沪深港资金流动数据
 */
- (void)getHuShenGangTongCapitalFlowsData:(void (^_Nullable)(CMSHuShenGangTongCapitalFlowModel *  _Nonnull data))callback;

/** 请求A股 市场成交数据统计
 *@param callback 目前是有 柱状图 和 横向图 数据
 */
- (void)getMarketOverviewDataCallback:(void (^)(CMSQuotesMarketPreViewPlateModel *  _Nonnull model))callback;

/** 请求A股 市场总览 盘后点评
 */
- (void)getMarketCommentModel:(void (^)(CMSQuotesCommentModel * _Nonnull model))callback;

/** 请求A股 板块 主力流入
 *@param type (行业type，概念type，地区type)
 */
- (void)getBlockInflowsDataWithType:(NSString *)type callback:(void (^)(NSArray<CMSQuotesMainInflowsBlockModel *> * _Nonnull datas))callback;


///  请求A股主题投资  今日热门
- (void)getTopicInvestmentTodayHotData:(void (^)(NSArray<CMSQuotesHotTopicsTodayHotModel *> * _Nonnull datas))callback;
///  请求A股主题投资  近期埋伏
- (void)getTopicInvestmentRecentOpportunityData:(void (^)(NSArray<CMSRecentOpportunityModel *> * _Nonnull datas))callback;

/** 请求A股 数据有招 新股新债
 */
- (void)getMarketNewStockAndNewDebtData:(void (^)(NSString * _Nonnull newStock,NSString * _Nonnull newDabt))callback;

/** 请求A股 大盘异动
 */
- (void)getMarketChangesTimeChartData:(void (^)(CMSStockQuotesTimeChartModel * model))callback;
- (void)getMarketChangesLabelNodesData:(void (^)(NSArray<CMSMarketChangeInfo *> * _Nonnull labelNodes))callback;

@end


NS_ASSUME_NONNULL_END
