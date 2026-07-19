#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DynamicPropClientside.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_EconItemView;
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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xf00
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_PlayerCosmeticPropClientside : public source2sdk::client::C_DynamicPropClientside
        {
        public:
            std::int32_t m_iPlayerNum; // 0xd20            
            std::int32_t m_iCosmeticType; // 0xd24            
            char m_szProxyTextureName[260]; // 0xd28            
            uint8_t _pad0e2c[0x4]; // 0xe2c
            // m_hProxyTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hProxyTexture;
            char m_hProxyTexture[0x8]; // 0xe30            
            uint8_t _pad0e38[0xa0]; // 0xe38
            bool m_bGeneratedShowcaseProps; // 0xed8            
            uint8_t _pad0ed9[0x7]; // 0xed9
            // m_vecShowcaseProps has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::C_PlayerCosmeticPropClientside*> m_vecShowcaseProps;
            char m_vecShowcaseProps[0x18]; // 0xee0            
            source2sdk::client::C_EconItemView* m_pShowcaseItem; // 0xef8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PlayerCosmeticPropClientside because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PlayerCosmeticPropClientside) == 0xf00);
    };
};
