//
//  CMSGroupManagementTableViewCell.h
//  GroupManagement_1
//
//  Created by symbio on 2020/11/10.
//

#import <UIKit/UIKit.h>
#import "CMSSelfSelectGroupProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface CMSGroupManagementTableViewCell : UITableViewCell
@property (nonatomic, strong) id<CMSSelfSelectGroupProtocol> model;

/// 隐藏回调
@property (nonatomic, strong) void(^hiddenBlock)(id<CMSSelfSelectGroupProtocol> model);

/// 删除回调
@property (nonatomic, strong) void(^deleteBlock)(id<CMSSelfSelectGroupProtocol> model);

/// rename回调
@property (nonatomic, strong) void(^renameBlock)(id<CMSSelfSelectGroupProtocol> model);

/// 置顶回调
@property (nonatomic, strong) void(^placedTopBlock)(id<CMSSelfSelectGroupProtocol> model);

@end

NS_ASSUME_NONNULL_END

