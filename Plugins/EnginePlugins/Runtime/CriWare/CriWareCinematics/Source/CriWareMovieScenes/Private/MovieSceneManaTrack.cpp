#include "MovieSceneManaTrack.h"

#include "Evaluation/MovieSceneEvalTemplate.h"

UMovieSceneManaTrack::UMovieSceneManaTrack() {
}

FMovieSceneEvalTemplatePtr UMovieSceneManaTrack::CreateTemplateForSection(const UMovieSceneSection& InSection) const
{
	return FMovieSceneEvalTemplatePtr();
}


