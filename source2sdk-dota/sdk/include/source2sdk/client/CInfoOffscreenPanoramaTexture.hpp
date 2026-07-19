#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_PointEntity.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseModelEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x7f8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class CInfoOffscreenPanoramaTexture : public source2sdk::client::C_PointEntity
        {
        public:
            bool m_bDisabled; // 0x5f0            
            uint8_t _pad05f1[0x3]; // 0x5f1
            std::int32_t m_nResolutionX; // 0x5f4            
            std::int32_t m_nResolutionY; // 0x5f8            
            uint8_t _pad05fc[0x4]; // 0x5fc
            CUtlSymbolLarge m_szPanelType; // 0x600            
            CUtlSymbolLarge m_szLayoutFileName; // 0x608            
            CUtlSymbolLarge m_RenderAttrName; // 0x610            
            // m_TargetEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_BaseModelEntity>> m_TargetEntities;
            char m_TargetEntities[0x18]; // 0x618            
            std::int32_t m_nTargetChangeCount; // 0x630            
            uint8_t _pad0634[0x4]; // 0x634
            // m_vecCSSClasses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CUtlSymbolLarge> m_vecCSSClasses;
            char m_vecCSSClasses[0x18]; // 0x638            
            CUtlSymbolLarge m_szTargetsName; // 0x650            
            // m_AdditionalTargetEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseModelEntity>> m_AdditionalTargetEntities;
            char m_AdditionalTargetEntities[0x18]; // 0x658            
            uint8_t _pad0670[0x160]; // 0x670
            // metadata: MNotSaved
            bool m_bCheckCSSClasses; // 0x7d0            
            uint8_t _pad07d1[0x27];
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
            // CUtlSymbolLarge InputAddCSSClass; // 0x0
            // CUtlSymbolLarge InputRemoveCSSClass; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CInfoOffscreenPanoramaTexture because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CInfoOffscreenPanoramaTexture) == 0x7f8);
    };
};
