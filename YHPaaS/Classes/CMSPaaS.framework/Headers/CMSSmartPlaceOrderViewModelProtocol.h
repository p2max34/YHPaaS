//
//  CMSSmartPlaceOrderViewModelProtocol.h
//  Aspects
//
//  Created by 吴演 on 2020/11/27.
//

#import <Foundation/Foundation.h>
#import "CMSSmartTradeStockModel.h"
#import "CMSSmartTradeOrderModel.h"
#import "CMSSmartTradeStyleSectionModel.h"
#import "CMSSmartTradeCommitViewStyleModel.h"

NS_ASSUME_NONNULL_BEGIN

@protocol CMSSmartPlaceOrderUIDelegate <NSObject>

- (void)jumpToStockSearch;

- (void)jumpToStockDetail:(NSString *)stockCode;

@end

@protocol CMSSmartPlaceOrderViewModelProtocol <NSObject>

@required
@property (nonatomic, readonly, strong) CMSSmartTradeStockModel *stockModel;
@property (nonatomic, readonly, strong) CMSSmartTradeOrderModel *orderModel;
// YES:新建下单 NO:修改下单
@property (nonatomic, readonly, assign) BOOL isCreate;
@property (nonatomic, readonly, assign) NSInteger maxCountOfStockCode;
 
@property (nonatomic, weak) id<CMSSmartPlaceOrderUIDelegate> uiDelegate; //处理UI跳转的，从viewModel从抽取出来

#pragma mark - 构造方法
/// 构造订单VM
/// @param order 修改下单传值, 新建下单nil
- (instancetype)initWithOrder:(nullable CMSSmartTradeOrderModel *)order;

#pragma mark - 请求
/// 查询股票信息
- (void)queryStockInfoWithCode:(NSString *)code clearData:(BOOL)clearData;

/// 查询持仓信息
- (void)queryPositionStocks;

/// 提交订单之前的检查
- (void)prepareForPlaceOrder:(void(^)(BOOL success))callback;

/// 提交
- (void)submit;

/// 开启消息提醒后，回到页面做弹创建成功确认框
- (void)showPlaceOrderSuccessDialog;

///提交确认框页面的提示
- (NSString *)commitViewTips;

@end

NS_ASSUME_NONNULL_END
