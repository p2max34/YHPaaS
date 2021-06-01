//
// CMSSmartTradeOrderModel.h
//  CMSPaaSBenchmark
//
//  Created by mac on 2020/11/1.
//  Copyright © 2020 CMS. All rights reserved.
//

#import <Foundation/Foundation.h>
#define LongEffectiveDateEndDate @"2099-01-01"

@interface CMSSmartTraderDataOrderParamVolumeModel : NSObject
@property (nonatomic, strong) NSNumber *amount;
@property (nonatomic, copy) NSString *unit;
@end

@interface CMSSmartTraderDataStockOrHoldModel : NSObject

@property (nonatomic, copy) NSString *code;
/// "XSHE/XSHG"
@property (nonatomic, copy) NSString *market;

@property (nonatomic, copy) NSString *name;

@end

@interface CMSSmartTraderDataOrderParamModel : NSObject

@property (nonatomic, copy) NSString *biz_type;
@property (nonatomic, copy) NSString *price_type;
@property (nonatomic, copy) NSString *market_price;
@property (nonatomic, copy) NSString *limit_price;
@property (nonatomic, copy) NSString *price;
/// "volume":{amount: 100, unit:"股"}, // 股票是股，债券是手或者张
@property (nonatomic, strong) CMSSmartTraderDataOrderParamVolumeModel *volume;

@end

@interface CMSSmartTraderDataValidateModel : NSObject

@property (nonatomic, copy) NSString *begin_date;
/// 约定end_date为"2099-01-01"为“长期有效”
@property (nonatomic, copy) NSString *end_date;

@end

@interface CMSSmartTraderDataRuleModel : NSObject
/// 触发类型
@property (nonatomic, copy) NSString *type;
/// 当前价格
@property (nonatomic, copy) NSString *base_price;
/// 百分比或数值
@property (nonatomic, copy) NSString *target_type;
/// 目标值
@property (nonatomic, copy) NSString *target;

@end

@interface CMSAdvancedSettingMonitorPeriodDateModel : NSObject
@property (nonatomic, strong) NSString *begin;
@property (nonatomic, strong) NSString *end;
@end

@interface CMSAdvancedSettingMonitorPeriodModel : NSObject
@property (nonatomic, strong) CMSAdvancedSettingMonitorPeriodDateModel *day;
@property (nonatomic, strong) CMSAdvancedSettingMonitorPeriodDateModel *time;
@property (nonatomic, assign) BOOL enable;

- (instancetype)initWithDefaultData;

@end

@interface CMSAdvancedSettingBiasControlModel : NSObject
@property (nonatomic, strong) NSString *bias;
@property (nonatomic, assign) BOOL enable;
@end

@interface CMSAdvancedSettingDelayConfirmModel : NSObject
@property (nonatomic, assign) BOOL enable;
@property (nonatomic, strong) NSString *confirm_type;
@property (nonatomic, strong) NSNumber *confirm_time;
@end

@interface CMSAdvancedSettingTurningRangeModel : NSObject
@property (nonatomic, assign) BOOL enable;
@property (nonatomic, strong) NSString *limit;
@end

@interface CMSAdvancedSettingGuaranteeTriggerModel : NSObject
@property (nonatomic, assign) BOOL enable;
@end

@interface CMSSmartOrderOrderAdvancedSettingModel : NSObject

@property (nonatomic, strong ) CMSAdvancedSettingMonitorPeriodModel *monitor_period;
@property (nonatomic, strong) CMSAdvancedSettingBiasControlModel *bias_control;
@property (nonatomic, strong) CMSAdvancedSettingGuaranteeTriggerModel *guarantee_trigger;
@property (nonatomic, strong) CMSAdvancedSettingDelayConfirmModel *delay_confirm;
@property (nonatomic, strong) CMSAdvancedSettingTurningRangeModel *turning_range;

- (instancetype)initWithDefaultData;


@end

@interface CMSSmartTradeOrderModel : NSObject

@property (nonatomic, copy) NSString *order_type;

@property (nonatomic, strong) CMSSmartTraderDataStockOrHoldModel *holder_acc;
/// 股票
@property (nonatomic, strong) CMSSmartTraderDataStockOrHoldModel *stock;
/// 条件
@property (nonatomic, strong) CMSSmartTraderDataRuleModel *rule;
/// 委托设置
@property (nonatomic, strong) CMSSmartTraderDataOrderParamModel *order_param;
/// 时间设置
@property (nonatomic, strong) CMSSmartTraderDataValidateModel *validate_date;
/// 备注
@property (nonatomic, copy) NSString *remark;
/// 高级设置
@property (nonatomic, strong) CMSSmartOrderOrderAdvancedSettingModel *advanced_setting;

@property (nonatomic, copy) NSString *order_id;
@property (nonatomic, copy) NSString *risk_agreement;
@property (nonatomic, copy) NSString *st_risk_agreement;
@property (nonatomic, copy) NSString *status;
@property (nonatomic, copy) NSString *entrust_status;
@property (nonatomic, copy) NSString *monitor_status;
@property (nonatomic, copy) NSString *create_time;
@property (nonatomic, copy) NSString *execute_time;

@property (nonatomic, copy) NSString *entrust_time;
@property (nonatomic, copy) NSString *invalid_time;
@property (nonatomic, copy) NSString *entrust_contract_no;
@property (nonatomic, copy) NSString *entrust_fail_msg;
@property (nonatomic, copy) NSString *c_entrust_time;
@property (nonatomic, copy) NSString *c_entrust_status;
@property (nonatomic, copy) NSString *act_entrust_volume;
@property (nonatomic, copy) NSString *act_entrust_price;
@property (nonatomic, copy) NSString *t_volume;
@property (nonatomic, copy) NSString *t_turnover;
@property (nonatomic, copy) NSString *t_price;

/// 获取条件描述富文本
- (NSMutableAttributedString *)obtainAttributedStringOfRuleDescribe;

- (BOOL)isCreateNewOrder;

- (NSString *)tips;

- (BOOL)isSellOrderType;

@end

