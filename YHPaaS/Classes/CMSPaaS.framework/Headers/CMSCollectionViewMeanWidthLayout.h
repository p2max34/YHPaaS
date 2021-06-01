//
//  CMSCollectionViewMeanWidthLayout.h
//  CMSPaaS
//
//  Created by sway on 2020/9/17.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class CMSCollectionViewMeanWidthSectionLayout;

typedef void (^CMSCollectionViewMeanWidthSectionLayoutBlock) (CMSCollectionViewMeanWidthSectionLayout *sectionLayout, NSIndexPath *indexPath);

@interface CMSCollectionViewMeanWidthSectionLayout : NSObject
@property (nonatomic, assign) NSInteger columns;
@property (nonatomic, assign) CGFloat itemsHeight;
@property (nonatomic, assign) CGFloat itemsWidth;
@property (nonatomic, assign) CGFloat columnSpacing;
@property (nonatomic, assign) CGFloat rowSpacing;
@property (nonatomic, assign) NSInteger rows;
@property (nonatomic, assign) UIEdgeInsets padding;
@property (nonatomic, assign) CGFloat headerHeight;
@property (nonatomic, assign) CGFloat footerHeight;

@end

@interface CMSCollectionViewMeanWidthLayout : UICollectionViewFlowLayout
///实现此block可改变layout里的CMSCollectionViewMeanWidthSecionLayout属性
@property (nonatomic,copy) CMSCollectionViewMeanWidthSectionLayoutBlock  updateSectionLayout;

- (instancetype)initWithColumnSpacing:(CGFloat)columnSpacing rowSpacing:(CGFloat)rowSpacing itemsHeight:(CGFloat)height rows:(int)rows columns:(int)columns padding:(UIEdgeInsets)padding;
- (instancetype)initWithColumnSpacing:(CGFloat)columnSpacing rowSpacing:(CGFloat)rowSpacing itemsSize:(CGSize)size rows:(int)rows padding:(UIEdgeInsets)padding;

@end

NS_ASSUME_NONNULL_END
