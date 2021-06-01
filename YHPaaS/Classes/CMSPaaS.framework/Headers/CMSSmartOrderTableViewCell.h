//
//  CMSSmartOrderTableViewCell.h
//  CMSPaaSBenchmark
//
//  Created by symbio on 2020/11/24.
//

#import <UIKit/UIKit.h>
#import "CMSSmartOrderModel.h"
NS_ASSUME_NONNULL_BEGIN

@interface CMSSmartOrderTableViewCell : UITableViewCell
/// 点击head回调, isOpenOrClose 是否进行收放
@property (nonatomic, strong) void(^didSelectHeaderBlock)(BOOL isOpenOrClose);

/// 选中了按钮时的回调, index 对应按钮列表的顺序  CMSSmartOrderModel
@property (nonatomic, strong) void(^didSelectButtonBlock)(NSInteger index, NSString *title, CMSSmartOrderModel *model);


@property (nonatomic, strong) CMSSmartOrderModel *model;

@end

NS_ASSUME_NONNULL_END

