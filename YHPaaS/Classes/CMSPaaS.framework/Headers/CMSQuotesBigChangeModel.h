//
//  CMSQuotesBigChangeModel.h
//  CMSPaaS
//
//  Created by HJ on 2021/2/25.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@class CMSQuoteIconTitleModel;
@interface CMSQuotesBigChangeModel : NSObject

@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) CMSQuoteIconTitleModel * more;

@end

NS_ASSUME_NONNULL_END
