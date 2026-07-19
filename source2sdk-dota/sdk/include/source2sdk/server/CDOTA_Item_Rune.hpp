#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseAnimatingActivity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x9c0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Item_Rune : public source2sdk::server::CBaseAnimatingActivity
        {
        public:
            uint8_t _pad0798[0x18]; // 0x798
            // m_hRuneSpawner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hRuneSpawner;
            char m_hRuneSpawner[0x4]; // 0x7b0            
            std::int32_t m_iRuneType; // 0x7b4            
            source2sdk::entity2::GameTime_t m_flRuneTime; // 0x7b8            
            std::int32_t m_nMapLocationTeam; // 0x7bc            
            char m_szLocation[512]; // 0x7c0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Item_Rune because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Item_Rune) == 0x9c0);
    };
};
