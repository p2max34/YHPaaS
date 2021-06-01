//
//  CMSQuotesCellListDataModel.h
//  CMSPaaS
//
//  Created by HJ on 2021/2/25.
//

#import <Foundation/Foundation.h>
#import "CMSQuotesBasicListCellModel.h"
#import "CMSQuoteIconTitleModel.h"
NS_ASSUME_NONNULL_BEGIN

@interface CMSQuotesCellListDataModel : NSObject
@property (nonatomic, copy) NSArray<CMSQuotesBasicListCellModel *> *titles;
@property (nonatomic, assign) NSInteger maxCount;
@property (nonatomic, strong) CMSQuoteIconTitleModel * more;
@property (nonatomic, copy) NSString *segmentStyle;
@end

NS_ASSUME_NONNULL_END
