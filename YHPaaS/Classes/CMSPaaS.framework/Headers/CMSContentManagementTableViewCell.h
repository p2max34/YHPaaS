//
//  CMSContentManagementTableViewCell.h
//  ContentManagement_1
//
//  Created by symbio on 2020/11/10.
//

#import <UIKit/UIKit.h>
#import "CMSStockHeaderModel.h"
#import "CMSStockProtocol.h"

@interface CMSContentManagementTableViewCell : UITableViewCell

@property (nonatomic, strong) id<CMSStockProtocol> model;
/// 状态改变回调
@property (nonatomic, strong) void(^changeStatusBlock)(id<CMSStockProtocol> model);
/// 提醒回调
@property (nonatomic, strong) void(^remindBlock)(id<CMSStockProtocol> model);
/// 置顶回调
@property (nonatomic, strong) void(^placedTopBlock)(id<CMSStockProtocol> model);

@end


