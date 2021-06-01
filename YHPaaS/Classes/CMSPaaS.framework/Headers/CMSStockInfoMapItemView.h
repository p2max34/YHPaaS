//
//  CMSStockInfoMapItemView.h
//  CMSPaaSBenchmark
//
//  Created by 吴演 on 2021/1/14.
//  Copyright © 2021 CMS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CMSServicesManager.h"
#import "CMSStockQuotesBinder.h"

NS_ASSUME_NONNULL_BEGIN
typedef enum {
    CMSStockInfoMapViewDirectionTop = 0,
    CMSStockInfoMapViewDirectionLeft,
    CMSStockInfoMapViewDirectionBottom,
    CMSStockInfoMapViewDirectionRight,
} CMSStockInfoMapViewDirection;

@interface CMSStockInfoMapItemPointModel : NSObject

@property (nonatomic, strong) NSArray<NSNumber *> *position;
@property (nonatomic, assign) CMSStockInfoMapViewDirection direction;
@property (nonatomic, assign) CGFloat linePointRatio;

@end

@interface CMSStockInfoMapItem : NSObject<CMSStockProtocol>
@property (nonatomic, strong) NSArray<NSNumber *> *pos;
@property (nonatomic, strong) CMSStockInfoMapItemPointModel *landscapePos;

@property (nonatomic, copy) NSString *stockIndex;
@property (nonatomic, copy) NSString *raiseFallPercent;
@property (nonatomic, copy) NSString *raiseFallPercentColor;
@property (nonatomic, copy) NSString *stockIndexColor;

@property (nonatomic,nullable, strong) CMSStockQuotesBinder *stockQuotesBinder;
@end

@interface CMSStockInfoMapItemView : UIControl
@property (nonatomic, strong) CMSStockInfoMapItem *item;
@end

NS_ASSUME_NONNULL_END
