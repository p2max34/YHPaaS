//
//  CMSQuotesBasicListCellModel.h
//  CMSPaaS
//
//  Created by SJ on 2021/3/15.
//

#import <Foundation/Foundation.h>
#import "CMSStockHeaderModel.h"
#import "CMSStock.h"
NS_ASSUME_NONNULL_BEGIN


@interface CMSStockBasicListCellColoumnsTypeModel : NSObject

//@property (nonatomic, strong, readonly) NSArray<CMSStockHeaderModel *>  *headerList;
@property (nonatomic, copy) NSArray<CMSStockHeaderModel *> *headers;
@property (nonatomic, copy) NSString *headerKey;
@property (nonatomic, copy) NSString *firstColumnWidth;
@property (nonatomic, copy) NSString *firstColumnName;
@property (nonatomic, assign) NSUInteger otherColumnNumPerScreen;

@end

@interface CMSQuotesBasicListCellTypeModel : NSObject
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *allHeaderKey;
@property (nonatomic, assign) BOOL selected;
@property (nonatomic, strong) CMSStockBasicListCellColoumnsTypeModel *stockQuotesColumns;
@property (nonatomic, copy) NSString *param;
@property (nonatomic, copy) NSString *ID;
@property (nonatomic, copy) NSArray<CMSStock *> *data;
@property (nonatomic, copy) NSString *dataKey;

@end

@interface CMSQuotesBasicListCellModel : NSObject

@property (nonatomic, copy) NSString *ID;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSArray<CMSQuotesBasicListCellTypeModel *>  *items;

@end



NS_ASSUME_NONNULL_END
