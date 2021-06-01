//
//  CMSDragCollectionView.h
//  CMSDragCollectionView_v1
//
//  Created by symbio on 2020/11/3.
//

#import <UIKit/UIKit.h>

@class CMSDragCollectionView;
@protocol  CMSDragCollectionViewDelegate<UICollectionViewDelegate>

@optional

/// 某些indexPaths是不需要交换和晃动的，常见的比如添加按钮等，传入这些indexPaths数组排出交换和抖动操作, 该数组中的indexPath无法长按抖动和交换
/// @param collectionView 视图
- (NSArray<NSIndexPath *> *_Nullable)excludeIndexPathsWhenMoveDragCellCollectionView:(CMSDragCollectionView *_Nullable)collectionView;

/**
 *  某个cell将要开始移动的时候调用
 *  @param indexPath      该cell当前的indexPath
 */
- (void)dragCellCollectionView:(CMSDragCollectionView *_Nullable)collectionView cellWillBeginMoveAtIndexPath:(NSIndexPath *_Nullable)indexPath;
/**
 *  某个cell正在移动的时候
 */
- (void)dragCellCollectionViewCellisMoving:(CMSDragCollectionView *_Nullable)collectionView;
/**
 *  cell移动完毕，并成功移动到新位置的时候调用
 */
- (void)dragCellCollectionViewCellEndMoving:(CMSDragCollectionView *_Nullable)collectionView;
/**
 *  成功交换了位置的时候调用
 *  @param fromIndexPath    交换cell的起始位置
 *  @param toIndexPath      交换cell的新位置
 */
- (void)dragCellCollectionView:(CMSDragCollectionView *_Nullable)collectionView moveCellFromIndexPath:(NSIndexPath *_Nullable)fromIndexPath toIndexPath:(NSIndexPath *_Nullable)toIndexPath;

@end

@protocol  CMSDragCollectionViewDataSource <UICollectionViewDataSource>


@optional
/**
 *  返回整个CollectionView的数据，动态拖拽必须实现，需根据数据进行移动后的数据重排
 */
- (NSArray *_Nullable)dataSourceArrayOfCollectionView:(CMSDragCollectionView *_Nullable)collectionView;
/**
 *  当数据源更新的到时候调用，动态拖拽必须实现，需将新的数据源设置为当前tableView的数据源(例如 :_data = newDataArray)
 *  @param newDataArray   更新后的数据源
 */
- (void)dragCellCollectionView:(CMSDragCollectionView *_Nullable)collectionView newDataArrayAfterMove:(NSArray *_Nullable)newDataArray;
@end

NS_ASSUME_NONNULL_BEGIN

@interface CMSDragCollectionView : UICollectionView
@property (nonatomic, weak) id<CMSDragCollectionViewDelegate> delegate;
@property (nonatomic, weak) id<CMSDragCollectionViewDataSource> dataSource;

/**长按多少秒触发拖动手势，默认1秒，如果设置为0，表示手指按下去立刻就触发拖动*/
@property (nonatomic, assign) NSTimeInterval minimumPressDuration;
/**是否开启拖动到边缘滚动CollectionView的功能，默认YES*/
@property (nonatomic, assign) BOOL edgeScrollEable;
/**是否开启拖动的时候所有cell抖动的效果，默认YES*/
@property (nonatomic, assign) BOOL shakeWhenMoveing;
/**抖动的等级(1.0f~10.0f)，默认4*/
@property (nonatomic, assign) CGFloat shakeLevel;
/**是否正在编辑模式，调用enterEditingMode和stopEditingMode会修改该方法的值*/
//@property (nonatomic, assign, readonly, getter=isEditing) BOOL editing;
@property (nonatomic, assign, getter=isEditing) BOOL editing;

/// 是否静态拖拽,当为静态拖拽时,cell位置不再发生任何移动, 默认yes
@property (nonatomic, assign) BOOL staticDrag;
/// 缩放比例 默认1 [0.5, 1.5]
@property (nonatomic, assign) CGFloat scale;

/**进入编辑模式，如果开启抖动会自动持续抖动，且不用长按就能出发拖动*/
- (void)enterEditingMode;

/**退出编辑模式*/
- (void)stopEditingMode;
@end

NS_ASSUME_NONNULL_END
