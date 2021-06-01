//
//  CMSAdaptWidthButtonCollectionView.h
//  CMSPaaS
//
//  Created by sway on 2020/10/16.
//

#import <UIKit/UIKit.h>
#import "CMSAdaptWidthButtonCollectionViewCell.h"

typedef void(^CMSAdaptWidthButtonDidSelectedBlock)(id selectItem);

@interface CMSAdaptWidthButtonCollectionView : UIView
@property (nonatomic, strong)   UICollectionView                      *collectionView;
@property (nonatomic, strong)   NSArray<CMSAdaptWidthButtonItem *>    *items;
@property (nonatomic, copy)     CMSAdaptWidthButtonDidSelectedBlock   clickedBlock;
@property (nonatomic, assign)   CGFloat viewHeight;
@property (nonatomic, assign)   CGFloat buttonBorderWidth;
@property (nonatomic, assign)   CGFloat buttonCornerRadius;
@property (nonatomic, strong)   UIFont  *buttonFont;
@property (nonatomic, strong)   UIFont *buttonSelectedFont;

@property (nonatomic, assign)   BOOL    isMultipleSelect;
@property (nonatomic, assign)   BOOL    needTheme;

@property (nonatomic, strong)   UIColor * buttonBorderColor;
@property (nonatomic, strong)   UIColor * buttonTextColor;
@property (nonatomic, strong)   UIColor * buttonBorderSelectedColor;
@property (nonatomic, strong)   UIColor * buttonTextSelectedColor;
@property (nonatomic, strong)   UIColor * buttonBackgroundColor;
@property (nonatomic, strong)   UIColor * buttonBackgroundSelectedColor;

- (instancetype)initWithFrame:(CGRect)frame items:(NSArray *)items ColumnSpacing:(CGFloat)columnSpacing rowSpacing:(CGFloat)rowSpacing  itemsHeight:(CGFloat)height padding:(UIEdgeInsets)padding isVertical:(BOOL)isVertical clickedBlock:(CMSAdaptWidthButtonDidSelectedBlock)clickedBlock;

- (void)reloadData;
@end

