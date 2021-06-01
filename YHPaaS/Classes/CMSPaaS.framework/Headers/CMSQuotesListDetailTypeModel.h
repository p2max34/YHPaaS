//
//  CMSQuotesListDetailTypeModel.h
//  CMSPaaS
//
//  Created by HJ on 2021/2/25.
//

#import <Foundation/Foundation.h>
#import "CMSStockHeaderModel.h"
#import "CMSStock.h"
NS_ASSUME_NONNULL_BEGIN

@interface CMSstockQuotesColumnsDetailTypeModel : NSObject

@property (nonatomic, copy) NSString *ID;
@property (nonatomic, copy) NSArray<CMSStockHeaderModel *> *headers;
@property (nonatomic, copy) NSString *headerKey;
@property (nonatomic, copy) NSString *firstColumnWidth;
@property (nonatomic, copy) NSString *firstColumnName;
@property (nonatomic, assign) NSUInteger otherColumnNumPerScreen;

@end

@interface CMSQuotesListDetailTypeModel : NSObject
@property (nonatomic, copy) NSString *allHeaderKey;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *ID;
@property (nonatomic, copy) NSString *param;
@property (nonatomic, assign) BOOL selected;
@property (nonatomic, copy) NSArray<CMSStock *> *data;
@property (nonatomic, copy) NSString *dataKey;
@property (nonatomic, strong) CMSstockQuotesColumnsDetailTypeModel *stockQuotesColumns;

@end

NS_ASSUME_NONNULL_END
