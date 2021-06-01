//
//  CMSUIConfigLoader.h
//  AFNetworking
//
//  Created by 吴演 on 2020/12/10.
//

#import <Foundation/Foundation.h>
@class CMSSmartTradeStyleModel;
@class CMSSmartTradeCommitViewStyleModel;
@class CMSSmartTradeOrderModel;
@class CMSSmartTradeStyleItemModel;
@class CMSSmartOrderEntrustPopCellStyle;

@protocol CMSUIConfigLoaderProtocol <NSObject>

/// 加载UI适配配置信息
- (NSDictionary *)loadUIAutoLayoutConfig;

- (NSDictionary *)getSmartOrderStyle;

- (NSDictionary *)getSmartOrderCommitStyle;

- (NSArray *)getSmartOrderEntrustStyle;

- (NSDictionary *)getSmartOrderAdvancedSettingGroup;

- (NSDictionary *)getSmartOrderDescStyle;

/// 所有表头属性配置列表
- (NSDictionary *)quotesPropertiesConfig;

/// 自选股表头属性默认列表
- (NSDictionary *)selfSelectStockQuotesDefaultPropertiesInfoConfig;
/// 获取自选股重置选中指数列表
- (NSArray<NSDictionary *> *)getSelfSelectStockDefaultSelectIndexList;
/// 获取自选股所有指数列表
- (NSArray<NSDictionary *> *)getSelfSelectStockAllIndexList;

/// 获取行情配置内容
- (NSDictionary *)getQuotesInfoConfig;
/// 获取默认的行情标签列表, 不实现则使用所有标签作为默认
@optional
- (NSArray<NSDictionary *> *)getQuotesDefaultSegmentTypes;
@end


