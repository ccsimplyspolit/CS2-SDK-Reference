#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"

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
        // Size: 0x6b0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class CDOTA_DarkCarnival_MurderOfCrows : public source2sdk::client::C_BaseEntity
        {
        public:
            // m_hCrowModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_hCrowModel;
            char m_hCrowModel[0x8]; // 0x5f0            
            CUtlSymbolLarge m_sCrowExplodeVFX; // 0x5f8            
            CUtlSymbolLarge m_sCrowExplodeSound; // 0x600            
            std::int32_t m_nCountingCrows; // 0x608            
            float m_flCrowSpeed; // 0x60c            
            float m_flCrowScale; // 0x610            
            uint8_t _pad0614[0x9c];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_DarkCarnival_MurderOfCrows because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_DarkCarnival_MurderOfCrows) == 0x6b0);
    };
};
