//
//  CMSStockInfoMapView.h
//  CMSPaaSBenchmark
//
//  Created by 吴演 on 2021/1/14.
//  Copyright © 2021 CMS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CMSStockInfoMapItemView.h"

NS_ASSUME_NONNULL_BEGIN

@interface CMSStockInfoMapView : UIView
typedef void(^CMSStockInfoMapViewShareBlock)(UIImage *image);
typedef void(^CMSStockInfoMapViewItemClickBlock)(NSInteger index);

@property (nonatomic,readwrite, copy) NSArray<CMSStockInfoMapItem *> *items;
@property (nonatomic, strong) UIImage *backgroundImage;
@property (nonatomic, copy) CMSStockInfoMapViewShareBlock shareBlock;
@property (nonatomic, copy) CMSStockInfoMapViewItemClickBlock itemClickBlock;

- (instancetype)initWithFrame:(CGRect)frame items:(NSArray<CMSStockInfoMapItem *> *)items;
@end

NS_ASSUME_NONNULL_END
