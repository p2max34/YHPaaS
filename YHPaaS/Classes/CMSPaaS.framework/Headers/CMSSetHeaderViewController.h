//
//  CMSSetHeaderViewController.h
//  SetHeader
//
//  Created by symbio on 2020/11/10.
//

#import <UIKit/UIKit.h>
#import "CMSStockHeaderViewModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface CMSSetHeaderViewController : UIViewController
/// 设置表头
@property (nonatomic, strong) CMSStockHeaderViewModel * viewModel;
@end

NS_ASSUME_NONNULL_END



