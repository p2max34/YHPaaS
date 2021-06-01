//
//  CMSMarketStockInfoCollectionViewCell.h
//  Pods
//
//  Created by 吴演 on 2020/9/18.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface CMSMarketStockInfoCollectionViewExchangeRateCell : UICollectionViewCell
@property (nonatomic, strong) UILabel *nameLabel;
@property (nonatomic, strong) UILabel *contentLabel;
@property (nonatomic, strong) UILabel *detailLabel;
- (void)setName:(NSString *)name;
- (void)setContent:(NSString *)content;
- (void)setNums:(NSArray<NSString *> *)nums;
- (void)updateBackgroundColorWithValue:(CGFloat)value;
@end

@interface CMSMarketStockInfoCollectionViewPlateCell : UICollectionViewCell

- (void)setName:(NSString *)name;
- (void)setContent:(NSString *)content;
- (void)setDetail:(NSString *)sourceName percent:(NSString *)percent;

@end

@interface CMSMarketStockInfoCollectionViewSpeedCell : UICollectionViewCell

- (void)setName:(NSString *)name;
- (void)setSpeed:(NSString *)speed;
- (void)setSpeedPercent:(NSString *)speedPercent;

@end
