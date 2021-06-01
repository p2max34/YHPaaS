//
//  CMSStockGroupManageViewModel.h
//  CMSPaaS
//
//  Created by symbio on 2021/1/29.
//

#import <Foundation/Foundation.h>
#import "CMSSelfSelectGroupProtocol.h"
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface CMSStockGroupManageViewModel : NSObject

/// 新创建的组
@property (nonatomic, strong) id<CMSSelfSelectGroupProtocol> createGroup;
/// 所有列表数据
@property (nonatomic, strong) NSArray<id<CMSSelfSelectGroupProtocol>> * groupList;
@property (nonatomic, strong, readonly) NSArray<id<CMSSelfSelectGroupProtocol>> * visibleGroups;
/// 我的自选
@property (nonatomic, strong, readonly) id<CMSSelfSelectGroupProtocol> myChoice;

/// 数据加载
- (void)loadData;

/// 删除某条数据
- (void)deleteGroupWithModel:(id<CMSSelfSelectGroupProtocol>)model viewController:(UIViewController *)viewController;

/// 重命名某条数据
- (void)renameGroup:(id<CMSSelfSelectGroupProtocol>)group viewController:(UIViewController *)viewController;

/// 更新自选股分组
- (void)updateGroups:(NSArray<id<CMSSelfSelectGroupProtocol>> *)groups;

///// 改变某条数据的状态
- (void)changeGroupStatusWithModel:(id<CMSSelfSelectGroupProtocol>)model;



/// 新建一条组数据
- (void)createGroupWithViewController:(UIViewController *)viewController;

@end

NS_ASSUME_NONNULL_END





