//
//  CMSSetHeaderTableViewCell.h
//  SetHeader
//
//  Created by symbio on 2020/11/10.
//

#import <UIKit/UIKit.h>
#import "CMSStockHeaderModel.h"


NS_ASSUME_NONNULL_BEGIN

@interface CMSSetHeaderTableViewCell : UITableViewCell

@property (nonatomic, strong) CMSStockHeaderModel *model;

/// 状态改变回调
@property (nonatomic, strong) void(^changeStatusBlock)(CMSStockHeaderModel *model);

@end

NS_ASSUME_NONNULL_END

