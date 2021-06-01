//
//  CMSDetailsIntroductionCollectionView.h
//  CMSPaaS
//
//  Created by 李嘉 on 2020/9/10.
//

#import <UIKit/UIKit.h>
@class CMSFunctionCardModel;

NS_ASSUME_NONNULL_BEGIN

typedef void(^CMSFunctionCardDidSelectedBlock)(id selectItem, NSIndexPath *indexPath);

@interface CMSFunctionCardCollectionView : UIView

@property (copy, nonatomic) CMSFunctionCardDidSelectedBlock selectedBlock;


/// 加载排列视图
/// @param frame 视图大小
/// @param columns 列数
/// @param itemHeight 单个视图高度
- (instancetype)initWithFrame:(CGRect)frame
                      columns:(int)columns
                   itemHeight:(CGFloat)itemHeight;

@property (nonatomic, copy)   NSArray<CMSFunctionCardModel *>   *models;

@end

NS_ASSUME_NONNULL_END
