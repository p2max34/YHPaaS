//
//  CMSQuoteStockCollectionView.h
//  CMSPaaSBenchmark
//
//  Created 吴演 on 2020/9/10.
//  Copyright © 2020 CMS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CMSQuoteStockCollectionViewCell.h"

NS_ASSUME_NONNULL_BEGIN
static NSString *const kStockPlaceholder = @"--";

typedef void (^CMSQuoteStockCollectionViewSelectedBlock)(NSIndexPath *indexPath, CMSQuoteStockCollectionViewItemModel *item);
@interface CMSQuoteStockCollectionView : UICollectionView

@property (nonatomic, assign) BOOL needTheme;
@property (nonatomic, strong) NSArray<CMSQuoteStockCollectionViewItemModel *> *datas;
@property (nonatomic, assign) NSInteger row;
@property (nonatomic, copy) CMSQuoteStockCollectionViewSelectedBlock selectedBlock;
@property (nonatomic, class, assign) CGSize defaultItemSize;

@end

NS_ASSUME_NONNULL_END


