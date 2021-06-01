//
//  CMSQuoteGTCapitalView.h
//  CMSPaaS
//
//  Created by 李嘉 on 2021/1/11.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CMSQuoteGTCapitalItem : NSObject
@property (nonatomic, assign) CGFloat hgtInflow;
@property (nonatomic, assign) CGFloat sgtInflow;
@end

typedef void(^CMSQuoteGTCapitalClickedBlock)(NSString *uri);

@interface CMSQuoteGTCapitalView : UIView

@property (nonatomic, copy) CMSQuoteGTCapitalClickedBlock clickedBlock;
@property (nonatomic, strong) CMSQuoteGTCapitalItem *model;
@property (nonatomic, copy) NSString *uri;
@property (nonatomic, copy) NSString *name;

- (instancetype)initWithFrame:(CGRect)frame
                    DataModel:(CMSQuoteGTCapitalItem* _Nullable)model
                 clickedBlock:(CMSQuoteGTCapitalClickedBlock)clickedBlock;

@end

NS_ASSUME_NONNULL_END
