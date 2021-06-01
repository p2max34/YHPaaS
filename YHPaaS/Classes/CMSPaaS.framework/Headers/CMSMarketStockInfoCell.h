//
//  CMSMarketStockInfoCell.h
//  CMSPaaSBenchmark
//
//  Created 吴演 on 2020/9/9.
//  Copyright © 2020 CMS. All rights reserved.
//

#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface CMSMarketStockInfoCell : UITableViewCell

-(void)setStockName:(NSString *)name;
-(void)setStockDescribe:(NSString *)describe;
-(void)setStockDatas:(NSArray<NSString *> *)datas;

@end

NS_ASSUME_NONNULL_END
