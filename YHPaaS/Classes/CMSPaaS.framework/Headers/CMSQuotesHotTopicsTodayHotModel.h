//
//  CMSQuotesHotTopicsTodayHotModel.h
//  CMSPaaS
//
//  Created by HJ on 2021/3/3.
//

#import <Foundation/Foundation.h>
#import "CMSStockProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface CMSQuotesHotTopicsTodayHotModel : NSObject
/// 今日模块标题 （北斗导航）
@property (nonatomic, copy) NSString *title;
/// 今日模块涨幅 （7.36）
@property (nonatomic, strong) NSNumber *changeRate;
/// 内容消息
@property (nonatomic, copy) NSString *content;
///uri
@property (nonatomic, copy) NSString *uri;
/// 相关股票列表
@property (nonatomic, strong) NSArray<id<CMSStockProtocol>>  *relativeStocks;
@end

NS_ASSUME_NONNULL_END
