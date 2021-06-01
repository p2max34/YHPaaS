//
//  CMSSmartTradeCommitView.h
//  Demo
//
//  Created by 吴演 on 2020/10/19.
//  Copyright © 2020 wyman. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CMSSmartTradeOrderModel.h"
#import "CMSSmartTradeStyleSectionModel.h"
#import "CMSSmartTradeStockModel.h"
#import "CMSSmartTradeCommitViewStyleModel.h"
#import "CMSSmartTradeOrderModel.h"
#import "CMSSmartPlaceOrderViewModelProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface CMSSmartTradeCommitView : UIControl

typedef void(^CMSSmartTradeCommitViewBlock)(void);

- (instancetype)initWithOrderType:(NSString *)orderType
                        viewModel:(id <CMSSmartPlaceOrderViewModelProtocol>)viewModel;

- (void)show:(CMSSmartTradeCommitViewBlock)commitBlock;

@end

NS_ASSUME_NONNULL_END
