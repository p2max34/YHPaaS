//
//  CMSSmartTradeViewController.h
//  CMSPaaSBenchmark
//
//  Created by 吴演 on 2020/10/13.
//  Copyright © 2020 CMS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CMSSmartTradeStyleSectionModel.h"
#import "CMSSmartTradeOrderModel.h"
#import "CMSSmartTradeCommitViewStyleModel.h"
#import "CMSSmartPlaceOrderViewModelProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface CMSSmartTradeViewController : UIViewController

/// 构造
/// @param orderType 订单类型
/// @param viewModel 实现协议的VM
- (instancetype)initWithOrderType:(NSString *)orderType
                        viewModel:(id<CMSSmartPlaceOrderViewModelProtocol>)viewModel;

@property (nonatomic, strong) id <CMSSmartPlaceOrderViewModelProtocol> viewModel;
@property (nonatomic, copy)   NSString *orderType;

@end

NS_ASSUME_NONNULL_END
