//
//  CMSQuoteRestTypeModel.h
//  CMSPaaS
//
//  Created by 李嘉 on 2021/3/1.
//

#import <Foundation/Foundation.h>
#import "CMSQuoteRestTitleModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface CMSQuotesOtherItemsTypeModel : NSObject
@property (nonatomic, strong) NSArray <CMSQuoteRestTitleModel *>  *titleItems;
@property (nonatomic, copy) NSString *title;
@end

@interface CMSQuoteRestTypeModel : NSObject
@property (nonatomic, strong) NSArray <CMSQuotesOtherItemsTypeModel *>  *otherItems;
@property (nonatomic, copy) NSString *title;
@end

NS_ASSUME_NONNULL_END
