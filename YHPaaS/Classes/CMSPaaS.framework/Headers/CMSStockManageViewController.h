//
//  CMSStockManageViewController.h
//  ContentManagement_1
//
//  Created by symbio on 2020/11/10.
//

#import <UIKit/UIKit.h>
#import "CMSStockManageViewModel.h"

NS_ASSUME_NONNULL_BEGIN
@interface CMSStockManageViewController : UIViewController
/// 本组股票管理模型
@property (nonatomic, strong) CMSStockManageViewModel *viewModel;
@end

NS_ASSUME_NONNULL_END


