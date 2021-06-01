//
//  CMSQuoteStockCollectionPackCellDataModel.h
//  CMSPaaS
//
//  Created by 吴演 on 2021/3/31.
//

#import <Foundation/Foundation.h>
#import "CMSQuoteIconTitleModel.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, CMSQuoteStockCollectionPackCellViewType) {
    CMSQuoteStockCollectionPackCellViewTypeStockDefault = 0,  // 默认股票布局
    CMSQuoteStockCollectionPackCellViewTypeStockDragonTiger,  // 龙虎榜布局
    CMSQuoteStockCollectionPackCellViewTypeBlockDefault,      // 板块默认布局
    CMSQuoteStockCollectionPackCellViewTypeBlockRaiseUp       // 板块快速涨幅布局
};

@interface CMSQuoteStockCollectionTypeModel: NSObject

@property (nonatomic, copy) NSString *text;
// 存储数据时用到的key
@property (nonatomic, copy) NSString *cacheKey;
@property (nonatomic, assign) BOOL selected;
@property (nonatomic, copy) NSString *param;
@property (nonatomic, copy) NSString *segmentId;

@end

@interface CMSQuoteStockCollectionPackCellDataModel : NSObject

@property (nonatomic, strong) NSArray<CMSQuoteStockCollectionTypeModel *>  *typeList;
@property (nonatomic,readonly, assign) CMSQuoteStockCollectionPackCellViewType type;
@property (nonatomic, strong) CMSQuoteIconTitleModel *more;
@property (nonatomic, strong) NSNumber *maxCount;
@property (nonatomic, assign) NSInteger maxRow;

@end

NS_ASSUME_NONNULL_END
