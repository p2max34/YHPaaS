//
//  CMSQuotesTopicsModel.h
//  CMSPaaS
//
//  Created by HJ on 2021/2/25.
//

#import <Foundation/Foundation.h>
#import "CMSQuotesListDetailTypeModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface CMSQuotesTopicsModel : NSObject

@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, assign) NSInteger defaultSelectIdx;
@property (nonatomic, copy) NSArray<CMSQuotesListDetailTypeModel *> * typeList;


@end

NS_ASSUME_NONNULL_END
