//
//  CMSSmartOrderModelManager.h
//  CMSPaaS
//
//  Created by 蒲公英 on 2020/12/30.
//

#import <Foundation/Foundation.h>

@class CMSSmartTradeStyleModel;
@class CMSSmartTradeCommitViewStyleModel;
@class CMSSmartTradeOrderModel;
@class CMSSmartTradeStyleSectionModel;
@class CMSSmartOrderEntrustPopCellStyle;

NS_ASSUME_NONNULL_BEGIN

@interface CMSSmartOrderModelManager : NSObject

+ (instancetype)sharedInstance;

- (CMSSmartTradeStyleModel *)smartTradeStyleModelWithOrderType:(NSString *)orderType;

- (CMSSmartTradeCommitViewStyleModel *)smartTradeSubmitStyleModelWithOrderType:(NSString *)orderType;

- (NSArray<CMSSmartTradeStyleSectionModel *> *)smartTradeAdvancedSettingGroupModelWithOrderType:(NSString *)orderType;

- (CMSSmartOrderEntrustPopCellStyle *)smartTradeEntrustModelWithOrderType:(NSString *)orderType;

/// 获取订单价格描述配置
- (NSString *)getOrderPriceDescWithOrder:(CMSSmartTradeOrderModel *)order;

/// 获取订单监控日期描述配置
- (NSDictionary *)getOrderMonitorPeriodDesc;

/// 获取订单类型描述配置
- (NSDictionary *)getOrderTypeDesc;

/// 获取订单状态描述配置
- (NSDictionary *)getOrderStatusDesc;

/// 获取订单条件描述配置
- (NSDictionary *)getOrderRuleDesc;

@end

NS_ASSUME_NONNULL_END
