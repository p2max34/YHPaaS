//
//  CMSQuoteStockCollectionViewCellLayout.h
//  Pods-CMSPaaSBenchmark
//
//  Created by 吴演 on 2021/4/22.
//

#import <UIKit/UIKit.h>
#import "CMSQuoteStockCollectionView.h"

NS_ASSUME_NONNULL_BEGIN

@interface CMSQuoteStockCollectionViewCellSubLayout : NSObject

@property (nonatomic, assign) NSTextAlignment textAlignment;
@property (nonatomic, assign) CGRect frame;

- (instancetype)initWithFrame:(CGRect)frame textAlignment:(NSTextAlignment)textAlignment;

@end

@interface CMSQuoteStockCollectionViewCellLayout : NSObject

@property (nonatomic, strong) CMSQuoteStockCollectionViewCellSubLayout *titleLayout;
@property (nonatomic, strong) NSArray<CMSQuoteStockCollectionViewCellSubLayout *> *firstRowsLayouts;
@property (nonatomic, strong) NSArray<CMSQuoteStockCollectionViewCellSubLayout *> *secondRowsLayouts;

// 每个type的布局都一样. 根据typeID来. 加载一次, 然后从缓存取
+ (instancetype)getLayoutWithTypeId:(NSString *)type item:(CMSQuoteStockCollectionViewItemModel *)item itemWidth:(CGFloat)itemWidth;

@end

NS_ASSUME_NONNULL_END
