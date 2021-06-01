//
//  CMSSelfSelectStockManagementViewController.h
//  CMSPaaSBenchmark
//
//  Created by symbio on 2020/11/11.
//  Copyright © 2020 CMS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CMSStockHeaderModel.h"
#import "CMSStockGroupManageViewController.h"
#import "CMSStockIndexSelectViewModel.h"
#import "CMSStockHeaderViewModel.h"
#import "CMSStockManageViewModel.h"
NS_ASSUME_NONNULL_BEGIN

@interface CMSSelfSelectStockManagementViewController : UIViewController

/// 指数选择VM
@property (nonatomic, strong) CMSStockIndexSelectViewModel *indexSelectViewModel;
/// 设置表头
@property (nonatomic, strong) CMSStockHeaderViewModel *headerViewModel;
/// 设置组管理
@property (nonatomic, strong) CMSStockGroupManageViewModel *groupManageViewModel;
/// 股票管理VM
@property (nonatomic, strong) CMSStockManageViewModel *stockManageViewModel;
/// 第一次进入哪个页面, 默认0
/// 0-股票管理 1-分组管理 2-表头管理 3-股指管理
@property (nonatomic, assign) NSInteger selectedIndex;

@end

NS_ASSUME_NONNULL_END
