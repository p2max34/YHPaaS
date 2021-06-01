//
//  CMSSmartOrderProtocol.h
//  CMSPaaSBenchmark
//
//  Created by symbio on 2020/11/25.
//

#import <Foundation/Foundation.h>
#import "CMSSmartTradeOrderModel.h"
#import "CMSSegmentHeaderView.h"
#import "CMSSmartPlaceOrderViewModelProtocol.h"

@class CMSSmartOrderModel;
@protocol CMSSmartOrderUIDelegate;

NS_ASSUME_NONNULL_BEGIN

/// 智能下单操作订单类型 close-关闭订单, pause-暂停对订单的监控, continue-恢复对订单的监控, delete-删除订单
typedef NS_ENUM(NSInteger, CMSSmartOrderOperationOrderType) {
    CMSSmartOrderOperationOrderTypeClose = 0,
    CMSSmartOrderOperationOrderTypePause,
    CMSSmartOrderOperationOrderTypeContinue,
    CMSSmartOrderOperationOrderTypeDelete,
};

/// 智能下单查询订单状态 valid-监控中, executed-已触发, invalid-已失效
typedef NS_OPTIONS(NSInteger, CMSSmartOrderQueryOrderStatus) {
    CMSSmartOrderQueryOrderStatusExecuted = 1 << 0,
    CMSSmartOrderQueryOrderStatusValid = 1 << 1,
    CMSSmartOrderQueryOrderStatusInvalid = 1 << 2,
    /// 历史记录状态
    CMSSmartOrderQueryOrderStatusHistory = 1 << 3,
};

/// 智能下单条件单类型协议
@protocol CMSSmartOrderConditionTypeModelProtocol <NSObject>
@property (nonatomic, strong, readonly) NSString *img;
@property (nonatomic, strong, readonly) NSString *title;
@property (nonatomic, strong, readonly) NSString *type;
@property (nonatomic, assign) BOOL selectd;
@end

@protocol CMSSmartOrderListViewModelProtocol <NSObject>
/// 详情模型
@property (nonatomic, strong, nullable) id detailModel;
/// 当前是哪个页面
@property (nonatomic, assign) CMSSmartOrderQueryOrderStatus status;

@property (nonatomic, weak) id<CMSSmartOrderUIDelegate> uiDelegate; //处理UI相关的，从viewModel里抽取出来

/// 获取下单ViewModel
/// @param order 订单模型
/// @param orderType 订单类型
- (id<CMSSmartPlaceOrderViewModelProtocol>)getSmartPlaceViewModelWithOrder:(CMSSmartTradeOrderModel * _Nullable)order orderType:(NSString *)orderType;

/// 关闭订单、暂停对订单的监控、恢复对订单的监控、删除订单
/// @param orderData 订单数据
/// @param type 智能下单操作订单类型
- (void)operationOrderWithOrderData:(id _Nullable)orderData type:(CMSSmartOrderOperationOrderType)type complete:(void(^_Nullable)(NSError *error))complete;

/// 订单详情查询
/// @param orderId 订单id
/// @param complete 回调
- (void)queryOrderDetailsWithOrderId:(NSString *)orderId complete:(void(^_Nullable)(CMSSmartTradeOrderModel * _Nullable model, NSError *error))complete;

/// 订单列表查询
/// @param status valid-监控中, executed-已触发, invalid-已失效. 在获取"我的智能单"时填写。支持列表，多个状态用逗号分隔
/// @param dateRange { "begin_date": "2018-04-16", "end_date": "2018-04-26" }
/// @param types price_buy-定价买入, price_sell-定价卖出。 缺省查全部
/// @param rowRange  指定起始行和结尾行，如果终止行不指定或者row_range不携带，表示从起始行开始的所有行
/// @param complete 回调 code 0 代表成功，其他代表失败
- (void)queryOrderListWithStatus:(CMSSmartOrderQueryOrderStatus)status
                       dateRange:(NSDictionary<NSString *, NSString *> *_Nullable)dateRange
                           types:(NSArray<id<CMSSmartOrderConditionTypeModelProtocol>> *)types
                        rowRange:(NSRange)rowRange
                        complete:(void(^_Nullable)(NSArray<CMSSmartTradeOrderModel *> *_Nullable models, NSInteger totalCount, NSError *error))complete;

/// 查询历史记录-包含的是过往已经触发（不包括今日已触发）和已失效的条件单
/// @param dateRange 时间范围 { "begin_date": "2018-04-16", "end_date": "2018-04-26" }
/// @param rowRange 指定起始行和结尾行，如果终止行不指定或者row_range不携带，表示从起始行开始的所有行
/// @param complete 回调 code 0 代表成功，其他代表失败
- (void)queryHistoryOrderListWithDateRange:(NSDictionary<NSString *, NSString *> *_Nullable)dateRange
                                  rowRange:(NSRange)rowRange
                                  complete:(void(^_Nullable)(NSArray<CMSSmartTradeOrderModel *> *_Nullable models, NSInteger totalCount, NSError *error))complete;

/// 查询订单数量-查询监控中订单数量、今日已触发订单数量、今日已失效订单数量
- (void)queryOrderCountWithComplete:(void(^_Nullable)(NSDictionary * _Nullable objectValues))complete;

/// 获取查询条件单类型列表
- (void)getQueryConditionOrderTypeList:(void(^)(NSArray<id<CMSSmartOrderConditionTypeModelProtocol>> *items))complete;
              
@end

@protocol CMSSmartOrderViewModelProtocol <NSObject>
/// 获取下单ViewModel
/// @param order 订单模型
/// @param orderType 订单类型
- (id<CMSSmartPlaceOrderViewModelProtocol>)getSmartPlaceViewModelWithOrder:(CMSSmartTradeOrderModel * _Nullable)order orderType:(NSString *)orderType;

/// 获取顶部标签具体数量
- (void)getHeaderTabbar:(void(^)(NSArray<CMSSegmentButtonItem *> *items, NSArray<NSNumber *> *status))complete;

/// 获取新建条件单类型列表
- (void)getNewCreateConditionOrderTypeList:(void(^)(NSArray<id<CMSSmartOrderConditionTypeModelProtocol>> *items))complete;

/// 已失效
@property (nonatomic, strong) id<CMSSmartOrderListViewModelProtocol> executedViewModel;
/// 监控中
@property (nonatomic, strong) id<CMSSmartOrderListViewModelProtocol> validViewModel;
/// 历史记录
@property (nonatomic, strong) id<CMSSmartOrderListViewModelProtocol> historyViewModel;

@end

@protocol CMSSmartOrderUIDelegate <NSObject>

- (void)jumpToOrderDetailsWithModel:(id<CMSSmartOrderListViewModelProtocol>)model;

- (void)jumpToSmartTradeWithOrderModel:(CMSSmartTradeOrderModel * _Nullable)orderModel orderType:(NSString *)orderType;

@end

NS_ASSUME_NONNULL_END
