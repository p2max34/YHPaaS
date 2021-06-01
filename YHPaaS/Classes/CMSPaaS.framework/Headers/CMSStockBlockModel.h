//
//  CMSStockBlockModel.h
//  Pods-CMSPaaSBenchmark
//
//  Created by 吴演 on 2021/2/4.
//

#import <Foundation/Foundation.h>
#import "CMSStockProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface CMSStockBlockModel : NSObject<CMSStockProtocol>

@property (nonatomic, nullable, strong) NSArray<id<CMSStockProtocol>> *relativeStocks;

@property (nonatomic, readonly, nullable, strong) id<CMSStockProtocol> relativeStock;

@end

NS_ASSUME_NONNULL_END
