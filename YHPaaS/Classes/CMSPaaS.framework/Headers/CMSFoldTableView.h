//
//  CMSFoldTableView.h
//  CMSPaaSBenchmark
//
//  Created by 吴演 on 2020/9/18.
//  Copyright © 2020 CMS. All rights reserved.
//

#import "CMSTableViewOC.h"
#import "CMSFoldTableView.h"
#import "CMSFoldTableViewSectionHeaderViewProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface CMSFoldTableView : CMSTableViewOC

typedef void(^CMSSectionHeaderViewClickedBlock)(CMSFoldTableView *tableView, NSInteger section);
/// 如果需要知道头部状态, 头部请遵循 CMSFoldTableViewSectionHeaderViewProtocol 协议
typedef void(^CMSConfigFoldSectionViewWithModelBlock)(CMSTableSectionModelOC * ,UIView<CMSFoldTableViewSectionHeaderViewProtocol> *sectionHeader);

@property (nonatomic,copy) CMSConfigFoldSectionViewWithModelBlock configFoldSectionViewWithModelCallBack;
@property (nonatomic, copy, nullable) CMSSectionHeaderViewClickedBlock sectionHeaderViewClickedBlock;

/// 默认是YES: 如果关闭, 那么组的收合需手动调用 foldSection
@property (nonatomic,assign) BOOL autoExpand;

/// 设置默认展开行 @[ @(CMSFoldState),  .. ]
-(void)setDefaultExpandStateSections:(NSArray<NSNumber *> *)states;

/// 默认全部支持展开操作, 如果有不支持展开缩放的组, 在此设置
-(void)setEnableSections:(NSArray<NSNumber *> *)sections;

/// 获取所有组的展开状态
-(NSArray *)foldStatesOfSection;

/// 手动展开组, 不需状态, 内部取相反状态(autoExpand 为 NO时, 使用该方法驱动UI)
/// @param index 组的index
- (void)foldSection:(NSInteger)index;

@end

NS_ASSUME_NONNULL_END
