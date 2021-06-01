//
//  CMSRollingMenusView.h
//  CMSPaaS
//
//  Created by SJ on 2020/11/4.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CMSRollingMenusViewModel : NSObject

/// 作为 row 的数据源  （类型  id  ） model
@property (nonatomic,strong) NSArray *rowDatas;

/// 作为 headerView 的数据源  （类型  id  ） model
@property (nonatomic,strong) id headerModel;
/// 作为 footerView 的数据源  （类型  id  ） model
@property (nonatomic,strong) id footerModel;

/// 作为扩展字段  （类型  id  ） remark
@property (nonatomic,strong) id remark;

-(instancetype)initWithRowData:(NSArray *)datas;

@end



@interface CMSRollingMenusView : UIView
/// scrollViewWillScroll响应
@property (nonatomic, copy) void(^scrollViewWillScrollBlock)(CGPoint offset);
/// scrollViewDidScroll响应
@property (nonatomic, copy) void(^scrollViewDidScrollBlock)(CGPoint offset);
/// scrollView结束滑动
@property (nonatomic, copy) void(^scrollViewDidEndScrollBlock)(CGPoint offset);
/// scrollView动画结束时滑动
@property (nonatomic, copy) void(^scrollViewDidEndScrollingAnimationBlock)(CGPoint offset);

/// 设置sectionView
@property (nonatomic, copy) UIView*(^sectionViewBlock)(BOOL isHeader, NSInteger section);
/// 设置sectionHeight
@property (nonatomic, copy) CGFloat(^sectionHeightBlock)(BOOL isHeader, NSInteger section);
/// cell轻触点击事件
@property (nonatomic, copy) void(^didSelectRowAtIndexPathBlock)(id ,NSIndexPath *);
/// 获取cell类型
@property (nonatomic, copy) NSDictionary*_Nonnull(^cellIdentifierAndClassOfModelBlock)(id ,NSIndexPath *);
/// cell配置
@property (nonatomic, copy) void(^configCellIndexPathWithModelBlock)(id, UITableViewCell *cell, NSIndexPath *indexPath, BOOL isCache);

/// cellwillDisplay
@property (nonatomic, copy) void(^cellwillDisplayBlock)(id model, UITableViewCell *cell,NSIndexPath *indexPath);

/// cellDidEndDisplayingBlock
@property (nonatomic, copy) void(^cellDidEndDisplayingBlock)(id model, UITableViewCell *cell,NSIndexPath *indexPath);
/// 数据源 
@property (nonatomic, strong) NSArray *datas;

/// 缓存的cellId
@property (nonatomic, strong) NSMutableDictionary *cellIdCache;

@property (nonatomic, strong) UITableView *tableView;

@end

NS_ASSUME_NONNULL_END
