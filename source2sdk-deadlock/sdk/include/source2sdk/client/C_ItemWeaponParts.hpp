#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraph.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BasePlayerPawn;
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
        // Size: 0xce0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CHandle< C_BasePlayerPawn > m_hTouchedPlayeres"
        #pragma pack(push, 1)
        class C_ItemWeaponParts : public source2sdk::client::CBaseAnimGraph
        {
        public:
            uint8_t _pad0ca8[0x20]; // 0xca8
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            // m_hTouchedPlayeres has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_BasePlayerPawn>> m_hTouchedPlayeres;
            char m_hTouchedPlayeres[0x18]; // 0xcc8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_ItemWeaponParts because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_ItemWeaponParts) == 0xce0);
    };
};
