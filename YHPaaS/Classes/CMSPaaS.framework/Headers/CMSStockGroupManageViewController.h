//
//  CMSStockGroupManageViewController.h
//  GroupManagement_1
//
//  Created by symbio on 2020/11/11.
//

#import <UIKit/UIKit.h>
#import "CMSStockGroupManageViewModel.h"
NS_ASSUME_NONNULL_BEGIN

@interface CMSStockGroupManageViewController : UIViewController
/// 分组管理的视图模型
@property (nonatomic, strong) CMSStockGroupManageViewModel *viewModel;

/// 更新tableview,使用已有的数据源
- (void)reloadTable;
@end

NS_ASSUME_NONNULL_END


