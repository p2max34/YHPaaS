//
//  CMSMarketStockInfoCollectionView.h
//  CMSPaaSBenchmark
//
//  Created 吴演 on 2020/9/10.
//  Copyright © 2020 CMS. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, CMSMarketStockInfoCollectionViewCellStyle) {
    CMSMarketStockInfoCollectionViewCellStyleExchangeRate,
    CMSMarketStockInfoCollectionViewCellStylePlate,
    CMSMarketStockInfoCollectionViewCellStyleSpeed,
    CMSMarketStockInfoCollectionViewCellStyleIndex,
};

NS_ASSUME_NONNULL_BEGIN

// 汇率模型
@interface CMSMarketStockInfoCubeExchangeRateItem : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *desc;
@property (nonatomic, strong) NSArray<NSString *> *nums;

@end

// 板块模型
@interface CMSMarketStockInfoCubePlateItem : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *desc;
@property (nonatomic, strong) NSString *sourceName;
@property (nonatomic, strong) NSString *percent;

@end

// 涨幅模型
@interface CMSMarketStockInfoCubeSpeedItem : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, strong) NSString *speed;
@property (nonatomic, strong) NSString *speedPercent;

@end

// 指数模型
@interface CMSMarketStockInfoCubeIndexItem : NSObject

@property (nonatomic, copy) NSString *indexName;
@property (nonatomic, copy) NSString *indexValue;
@property (nonatomic, copy) NSString *changeValue;
@property (nonatomic, copy) NSString *indexPercent;
@property (nonatomic, copy) NSString *indexCode;
@property (nonatomic, copy) NSString *setCode;

@end

// 列表模型
@interface CMSMarketStockInfoCellModel : NSObject

@property (nonatomic, readonly, assign) CMSMarketStockInfoCollectionViewCellStyle style;
@property (nonatomic, strong) CMSMarketStockInfoCubeExchangeRateItem *exchangeRateItem;
@property (nonatomic, strong) CMSMarketStockInfoCubeSpeedItem *speedItem;
@property (nonatomic, strong) CMSMarketStockInfoCubePlateItem *plateItem;
@property (nonatomic, strong) CMSMarketStockInfoCubeIndexItem *indexItem;

@end


@class CMSMarketStockInfoCollectionView;
typedef void(^CMSMarketStockInfoCollectionViewBlock)(CMSMarketStockInfoCellModel *item);

@interface CMSMarketStockInfoCollectionView : UICollectionView

@property (nonatomic, assign) CGFloat itemHeight;

@property (nonatomic, strong) NSArray<CMSMarketStockInfoCellModel *> *datas;
@property (nonatomic, copy) CMSMarketStockInfoCollectionViewBlock clickedBlock;

@end

NS_ASSUME_NONNULL_END


