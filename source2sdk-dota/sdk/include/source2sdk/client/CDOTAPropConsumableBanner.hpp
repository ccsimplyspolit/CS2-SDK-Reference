#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DynamicProp.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"

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
        // Size: 0xd80
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTAPropConsumableBanner : public source2sdk::client::C_DynamicProp
        {
        public:
            uint8_t _pad0d10[0x58]; // 0xd10
            source2sdk::client::PlayerID_t m_nPlayerID; // 0xd68            
            uint8_t _pad0d6c[0x4]; // 0xd6c
            // m_hAvatarTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hAvatarTexture;
            char m_hAvatarTexture[0x8]; // 0xd70            
            bool m_bUseAvatar; // 0xd78            
            uint8_t _pad0d79[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTAPropConsumableBanner because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTAPropConsumableBanner) == 0xd80);
    };
};
